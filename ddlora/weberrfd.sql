create table weberraf
(
wberpid     varchar2(8),
wberdat     varchar2(8),
wbertim     varchar2(8),
wberuid     varchar2(10),
wberrep     varchar2(2),
wbertmp     varchar2(3),
wberurn     varchar2(8),
wbervis     varchar2(8),
wbercnt     varchar2(3),
wbererr     varchar2(40),
wberspa     varchar2(78),
lf          varchar2(1),
constraint weberra1 primary key( 
wberpid,
wberdat,
wbertim)
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
create public synonym weberraf for weberraf;
create unique index weberra2 on weberraf
(
wberdat,
wbertim,
wberpid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index weberra3 on weberraf
(
wberuid,
wberdat,
wbertim,
wberpid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
