create table pmswdvaf
(
pmwddate    varchar2(8),
pmwdvalu    number(8,0),
pmwdcdte    varchar2(8),
pmwdctim    varchar2(8),
pmwdcusr    varchar2(10),
pmwdudte    varchar2(8),
pmwdutim    varchar2(8),
pmwduusr    varchar2(10),
pmwdspar    varchar2(30),
lf          varchar2(1),
constraint pmswdva1 primary key( 
pmwddate)
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
create public synonym pmswdvaf for pmswdvaf;
