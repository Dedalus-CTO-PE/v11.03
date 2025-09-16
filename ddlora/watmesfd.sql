create table watmesaf
(
waurno      varchar2(8),
waproc      varchar2(9),
dwacnt      varchar2(2),
dwacnt2     varchar2(2),
watext      varchar2(70),
waspare     varchar2(20),
lf          varchar2(1),
constraint watmesa1 primary key( 
waurno,
waproc,
dwacnt,
dwacnt2)
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
create public synonym watmesaf for watmesaf;
