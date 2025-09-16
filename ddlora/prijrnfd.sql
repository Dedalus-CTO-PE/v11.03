create table prijrnlf
(
prjrcode    varchar2(3),
prjrdate    varchar2(8),
prjrdebt    varchar2(8),
dprjrscn    varchar2(2),
dprjrtrn    varchar2(6),
prjrinvn    varchar2(8),
prjrspar    varchar2(4),
lf          varchar2(1),
constraint prijrnl1 primary key( 
prjrcode,
prjrdate,
prjrdebt,
dprjrscn,
dprjrtrn,
prjrinvn)
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
create public synonym prijrnlf for prijrnlf;
create unique index prijrnl2 on prijrnlf
(
prjrdebt,
dprjrscn,
dprjrtrn,
prjrinvn,
prjrcode,
prjrdate
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
