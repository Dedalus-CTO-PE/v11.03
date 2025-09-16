create table watwtaaf
(
wtwtdate    varchar2(6),
wtwtdoct    varchar2(6),
wtwtunit    varchar2(3),
wtwtproc    varchar2(9),
wtwtmean    number(4,0),
wtwtmax     number(4,0),
wtwthosp    number(8,0),
wtwtpat     number(8,0),
wtwtoth     number(8,0),
wtwtopen    number(8,0),
wtwtadd     number(8,0),
wtwtbook    number(8,0),
wtwtadmt    number(8,0),
wtwtdsch    number(8,0),
wtwtcanl    number(8,0),
wtwttday    number(8,0),
wtwtspar    varchar2(9),
lf          varchar2(1),
constraint watwtaa1 primary key( 
wtwtdate,
wtwtproc,
wtwtdoct,
wtwtunit)
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
create public synonym watwtaaf for watwtaaf;
create unique index watwtaa2 on watwtaaf
(
wtwtdate,
wtwtdoct,
wtwtproc,
wtwtunit
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index watwtaa3 on watwtaaf
(
wtwtdate,
wtwtunit,
wtwtproc,
wtwtdoct
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
