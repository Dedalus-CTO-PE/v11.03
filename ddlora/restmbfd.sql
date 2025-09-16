create table restmbaf
(
retbucs     varchar2(12),
retbcod     varchar2(12),
retbdes     varchar2(50),
retbprg     varchar2(8),
retbrep     varchar2(2),
retbtem     varchar2(3),
retbcum     varchar2(1),
retbur1     varchar2(25),
retbur2     varchar2(25),
retbud1     varchar2(8),
retbud2     varchar2(8),
retbuy1     varchar2(1),
retbuy2     varchar2(1),
retbspa     varchar2(19),
lf          varchar2(1),
constraint restmba1 primary key( 
retbucs,
retbcod)
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
create public synonym restmbaf for restmbaf;
