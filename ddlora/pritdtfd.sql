create table pritdtaf
(
prtdtmid    varchar2(4),
prtdtype    varchar2(1),
prtdseqn    varchar2(3),
prtdcode    varchar2(9),
prtdsubi    varchar2(3),
prtdquan    number(2,0),
prtdspar    varchar2(40),
lf          varchar2(1),
constraint pritdta1 primary key( 
prtdtmid,
prtdtype,
prtdseqn)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pritdtaf for pritdtaf;
