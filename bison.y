/* C Declarations */

%{
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>
    int mark1=0;
	int pop=1;
	int switchdone = 0;
	int switchvar;
    int save=0;
	int ifval[1000];
	int ifptr = -1;
	int ifdone[1000];
    int okk=0;
    int ptr = 0;
    int value[1000];
    char varlist[1000][1000];
    char keep[1000][1000];
	int v1[100];
	int mark=0;
    ///if already declared  return 1 else return 0
    int isdeclared(char str[]){
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) return 1;
        }
        return 0;
    }
    /// if already declared return 0 or add new value and return 1;
    int addnewval(char str[],int val){
        if(isdeclared(str) == 1) return 0;
        strcpy(varlist[ptr],str);
        value[ptr] = val;
        ptr++;
        return 1;
    }

    ///get the value of corresponding string
    int getval(char str[]){
        int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
        return value[indx];
    }
    int setval(char str[], int val){
    	int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
        value[indx] = val;

    }


%}

%union {
  char text[1000];
  int val;
}


%token <text>  ID
%token <val>  NUM
%token <text> STR

%type <val> expression

%left LT GT LE GE
%left PLUS MINUS
%left MULT DIV



%token INT DOUBLE Bin  sin1 gcd1 pow1 lcm1 cos1 asin1 acos1 Cir_area STAR CHAR SORT Prime Print MAIN PB CMP REV FACT CUM CMP1 MINI PE BB BE SM CM ASGN PRINTVAR MAXI PRINTSTR PRINTLN PLUS MINUS MULT DIV LT GT LE GE IF ELSE ELSEIF FOR INC TO SWITCH DEFAULT COL FUNCTION
%nonassoc IFX
%nonassoc ELSE
%left SH


%%

starthere 	: function program function
			;

program		: INT MAIN PB PE BB  statement BE { printf("\nCompilation Successful\n"); }
			;
statement	: /* empty */
			| statement declaration
			| statement print
			| statement expression 
			| statement ifelse
			| statement assign
			| statement forloop
			| statement switch
			| statement extend  
			| statement sob
			;

statement1	: /* empty */
			| statement1 temp
			;

lost	: /* empty */
			| lost lol
			;
/*--------declaration begin--------*/


declaration : type variables SM {}
			;
type		: INT | DOUBLE | CHAR {}
			;
variables	: variable CM variables {}
			| variable {}
			;
variable   	: ID 	
					{
						//printf("%s\n",$1);
						int x = addnewval($1,0);
						if(!x) {
							printf("Compilation Error:Variable %s is already declared\n",$1);
							exit(-1);
						}

					}
			| ID ASGN expression 	
					{
						//printf("%s %d\n",$1,$3);
						int x = addnewval($1,$3);
						if(!x) {
							printf("Compilation Error: Variable %s is already declared\n",$1);
							exit(-1);
							}
					}

			;

/*-------declaration end----------*/

/*------variable assign begin-----*/
sob: 	 MAXI PB expression PE SM
		{
		  printf("%d\n",$3);
		}
		| MINI PB expression PE SM
		{
		  printf("%d\n",$3);
		}
		| PB expression  PE SM
		{
		 
		}
		| FACT expression SM
		{
		 int mul=1,i=0;
		 for(i=1;i<=$2;i++)
		 mul*=i;
		  printf("%d\n",mul);
		}
		| Cir_area expression SM
		{
		 double pi=acos(-1);
		 double kk=pi*$2*$2;
		  printf("%.6f\n",kk);
		}
		| sin1 expression SM
		{
		double pi=acos(-1);
		  double a=$2*pi;
		  a/=180;
		 pi=sin(a);
		  printf("%.6f\n",pi);
		}
		| cos1 expression SM
		{
		double pi=acos(-1);
		  double a=$2*pi;
		  a/=180;
		 pi=cos(a);
		  printf("%.6f\n",pi);
		}
		| STAR expression SM
		{
		 int row, c, n;
		 n=$2;
		for (row = 1; row <= n; row++) 
		{
		for (c = 1; c <= n-row; c++) 
		printf(" ");
		for (c = 1; c <= 2*row - 1; c++) 
		printf("*");
		printf("\n");
		}
		}
		| CUM expression SM
		{
		 int mul=0,i=0;
		 for(i=1;i<=$2;i++)
		 mul+=i;
		  printf("%d\n",mul);
		}
		| Prime expression SM
		{
		
		int i,j;  
		for(i=2; i<=$2; i++)
		{
		int looo=0;
        for(j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
               looo=1;
			   break;
            }
        }
		if(!looo)printf("%d ",i);
		}
		}
		| Bin expression SM
		{
		int a[10],n,i;    
		n=$2;  
		for(i=0;n>0;i++)    
		{    
		a[i]=n%2;    
		n=n/2;    
		}        
	for(i=i-1;i>=0;i--)    
	{    
	printf("%d",a[i]);    
	}    
 		}
		| REV PB STR PE SM
		{
		 int l = strlen($3);
		int i;
		for(i = l-2;  i >0; i--) printf("%c",$3[i]);
		
		}
		| SORT PB STR PE SM
		{
		 int l = strlen($3);
		int i,j;
		for(i=1; i<l-1; i++)
		{
        for(j=i+1; j<l-1; j++)
        {
            if($3[i] > $3[j])
            {
                char temp     = $3[i];
                $3[i] = $3[j];
                $3[j] = temp;
            }
        }
		}
		for(i = 1;  i < l-1; i++) printf("%c",$3[i]);
		}
		;
assign : ID ASGN expression SM  
					{
						if(!isdeclared($1)) {
							printf("Compilation Error: Variable %s is not declared\n",$1);
							exit(-1);
						}
						else{
							setval($1,$3);
						}
				    }

/*------variable assign end-------*/


/*--------printing begin----------*/

print		: PRINTVAR PB ID PE SM 	
					{
						if(!isdeclared($3)){
							printf("Compilation Error: Variable %s is not declared\n",$3);
							exit(-1);
						}
						else{
							int v = getval($3);
							printf("%d",v);
						}
					}
			| PRINTSTR PB STR PE SM 
					{
						int l = strlen($3);
						int i;
						for(i = 1;  i < l-1; i++) printf("%c",$3[i]);
					}
			| PRINTLN PB PE	SM 	
					{
						printf("\n");
					}
			;
lol		: PRINTVAR PB ID PE SM 	
					{
					pop++;
						if(!isdeclared($3)){
							printf("Compilation Error: Variable %s is not declared\n",$3);
							exit(-1);
						}
						else{
							mark=1;
				      v1[pop] = getval($3);

						}
					}
			| PRINTSTR PB STR PE SM 
					{
					pop++;
					mark=2;
					strcpy(keep[pop],$3);	
					}
			| PRINTLN PB PE	SM 	
					{
					pop++;
						mark=3;
					}
			;
			
temp		: PRINTVAR PB ID PE SM 	
					{
						if(!isdeclared($3)){
							printf("Compilation Error: Variable %s is not declared\n",$3);
							exit(-1);
						}
						else{
						    int k=0;
							for(k = 1; k <= save; k += okk){
    							int v = getval($3);
								printf("%d",v);
							}
						}
					}
			| PRINTSTR PB STR PE SM 
					{
						int l = strlen($3);
						int k = 0,i=0;
						for(k = 1; k <= save; k += okk){
						for(i = 1;  i < l-1; i++) { printf("%c",$3[i]);
						}
						}
					}
			| PRINTLN PB PE	SM 	
					{
						int k = 0;
						for(k = 1; k <= save; k += okk){
						printf("\n");
						}
					}
			;


/*--------printing end------------*/

/*--------expression Begin--------*/

expression : NUM {$$ = $1;}
			| ID 	
					{
						if(!isdeclared($1)) {
							printf("Compilation Error: Variable %s is not declared\n",$1);
							exit(-1);
						}
						else{
							$$ = getval($1);
						}
				 	}
			| expression PLUS expression 
					{$$ = $1 + $3;}
			| expression MINUS expression 
					{$$ = $1 - $3;}
			| expression MULT expression 
					{$$ = $1 * $3;}
			| expression CMP expression 
					{
					if($1>$3) $$=$1;
					else $$=$3;
					}
			| expression CUM 
					{
					 $$=$1;
					}
			| expression CMP1 expression 
					{
					if($3>$1) $$=$1;
					else $$=$3;
					}
			| expression gcd1 expression 
					{
					int n1=$1;
					int n2=$3;
					
					while(n1!=n2)
					{
					if(n1 > n2)
					n1 -= n2;
					else
					n2 -= n1;
					}printf("%d\n",n1);
					}
			| expression lcm1 expression 
					{
					int n1=$1;
					int n2=$3;
					int a=n1*n2;
					while(n1!=n2)
					{
					if(n1 > n2)
					n1 -= n2;
					else
					n2 -= n1;
					}
					n1=a/n1;
					printf("%d\n",n1);
					}
			| expression pow1 expression 
					{
					int n1=$1;
					int n2=$3;
					int ans=1;
					while(n2)
					{
					ans*=n1;
					n2--;
					}
					printf("%d\n",ans);
					}
			| expression DIV expression 
					{
						if($3) {
 							$$ = $1 / $3;
							}
				  		else {
							$$ = 0;
							printf("\nRuntime Error: division by zero\t");
							exit(-1);
				  		} 
					}
			| expression LT expression	
					{ $$ = $1 < $3; }
			| expression GT expression	
					{ $$ = $1 > $3; }
			| expression LE expression	
					{ $$ = $1 <= $3; }
			| expression GE expression	
					{ $$ = $1 >= $3; }
			| PB expression PE
					{$$ = $2;}
			;


/*--------expression Begin--------*/


/*---------ifelse begin----------*/

ifelse 	: IF PB ifexp PE BB lost BE elseif
					{

						ifdone[ifptr] = 0;
						ifptr--;
						if(mark1){
						
						if(mark==1)
							{
							printf("%d",v1[0]);
							}
							else if(mark==2)
							{
							int i;
							int l=strlen(keep[0]);
							for(i = 1;  i < l-1; i++) printf("%c",keep[0][i]);
							}
							else
							{
							printf("\n");
							}
							}
							
					}
		;
ifexp	: expression 
					{			
                        pop=-1;
					    mark1=0;
						ifptr++;
						ifdone[ifptr] = 0;
						if($1){
						mark1=1;
							ifdone[ifptr] = 1;
							
						}	
					}						

		;
elseif 	: /* empty */
		| elseif ELSEIF PB expression PE BB lost BE 
					{
						if($4 && ifdone[ifptr] == 0){
							ifdone[ifptr] = 1;
							
							if(mark==1)
							{
							printf("%d",v1[1]);
							}
							else if(mark==2)
							{
							int i;
							int l=strlen(keep[1]);
							for(i = 1;  i < l-1; i++) printf("%c",keep[1][i]);
							}
							else
							{
							printf("\n");
							}
							}
						}
		| elseif ELSE BB lost BE
					{
						if(ifdone[ifptr] == 0){
							ifdone[ifptr] = 1;
							if(mark==1)
							{
							printf("%d",v1[2]);
							}
							else if(mark==2)
							{
							int i;
							int l=strlen(keep[2]);
							for(i = 1;  i < l-1; i++) printf("%c",keep[2][i]);
							}
							else
							{
							printf("\n");
							}
							}
						}

		;

/*---------ifelse end------------*/


/*------foor loop begin----------*/


forloop	: FOR PB expression TO expression INC expression  	
					{
						int st = $3;
						int ed = $5;
						int dif = $7;
						int cnt = 0;
						int k = 0;
						okk=dif;
						for(k = st; k <= ed; k += dif){
							cnt++;
						}	
						save=cnt;
						
					}
extend 	: PE BB statement1 BE				

/*------foor loop end------------*/


/*------switch case begin--------*/

switch	: SWITCH PB expswitch PE BB switchinside BE 
		;

expswitch 	:  expression 
					{
						switchdone = 0;
						switchvar = $1;
					}
			;


switchinside	: /* empty */
				| switchinside expression COL BB statement BE 
					{
						if($2 == switchvar){
							printf("Executed %d\n",$2);
							switchdone = 1;
						}					
					}
				| switchinside DEFAULT COL BB statement BE 
					{
						if(switchdone == 0){
							switchdone = 1;
							printf("Default Block executed\n");
						}
					}
				;


/*------switch case end----------*/

/*------function begin-----------*/

function 	: /* empty */
			| function func
			;

func 	: type FUNCTION PB fparameter PE BB statement BE
					{
						printf("Function Declared\n");
					}
		;
fparameter 	: /* empty */
			| type ID fsparameter
			;
fsparameter : /* empty */
			| fsparameter CM type ID
			;


/*-------function end------------*/
%%


int yyerror(char *s){
	printf( "%s\n", s);
}
