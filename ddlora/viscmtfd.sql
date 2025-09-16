create table viscmtaf
(
vsctvist    varchar2(8),
vscttype    varchar2(3),
vsctline    varchar2(3),
vsctdata    varchar2(100),
vsctukey    varchar2(24),
vsctspar    varchar2(30),
lf          varchar2(1),
constraint viscmta1 primary key( 
vsctvist,
vscttype,
vsctline)
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
create public synonym viscmtaf for viscmtaf;
