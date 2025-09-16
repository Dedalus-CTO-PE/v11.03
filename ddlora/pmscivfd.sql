create table pmscivaf
(
pmcvvisn    varchar2(8),
pmcvsnam    varchar2(60),
pmcvadr1    varchar2(35),
pmcvadr2    varchar2(35),
pmcvadr3    varchar2(35),
pmcvadr4    varchar2(35),
pmcvpcod    varchar2(8),
pmcvphon    varchar2(20),
pmcvmobn    varchar2(20),
pmcvemla    varchar2(80),
pmcvcnam    varchar2(60),
pmcvcom1    varchar2(75),
pmcvcom2    varchar2(75),
pmcvrfno    varchar2(30),
pmcvspar    varchar2(40),
lf          varchar2(1),
constraint pmsciva1 primary key( 
pmcvvisn)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmscivaf for pmscivaf;
