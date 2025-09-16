create table webrspaf
(
wbrsspid    varchar2(8),
wbrsusid    varchar2(10),
wbrsprid    varchar2(8),
wbrsdate    varchar2(8),
wbrstime    varchar2(5),
wbrsdesc    varchar2(35),
wbrsspar    varchar2(80),
lf          varchar2(1),
constraint webrspa1 primary key( 
wbrsspid)
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
create public synonym webrspaf for webrspaf;
create unique index webrspa2 on webrspaf
(
wbrsprid,
wbrsspid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index webrspa3 on webrspaf
(
wbrsusid,
wbrsprid,
wbrsspid
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
