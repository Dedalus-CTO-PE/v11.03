create table rcpcrdaf
(
crddate     varchar2(8),
dcrdflag    varchar2(1),
crdcode     varchar2(3),
crdrecno    varchar2(12),
dcrdcoun    varchar2(2),
crdname     varchar2(20),
dcrdamnt    number(14,2),
crdstat     number(1,0),
lf          varchar2(1),
constraint rcpcrda1 primary key( 
crddate,
dcrdflag,
crdcode,
crdrecno,
dcrdcoun)
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
create public synonym rcpcrdaf for rcpcrdaf;
