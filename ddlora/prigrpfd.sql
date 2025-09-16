create table prigrpaf
(
dprgpflg    varchar2(2),
prgpitm1    varchar2(9),
prgpsub1    varchar2(3),
prgpdate    varchar2(8),
prgpitm2    varchar2(9),
prgpsub2    varchar2(3),
prgpspar    varchar2(4),
lf          varchar2(1),
constraint prigrpa1 primary key( 
dprgpflg,
prgpitm1,
prgpsub1,
prgpdate,
prgpitm2,
prgpsub2)
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
create public synonym prigrpaf for prigrpaf;
