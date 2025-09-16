create table patqmhaf
(
dptqmadm    varchar2(8),
ptqmtoua    varchar2(1),
ptqmemps    varchar2(1),
ptqmpsns    varchar2(1),
ptqmprms    varchar2(1),
ptqmrtfc    varchar2(2),
ptqmmlsi    varchar2(1),
ptqmpsnt    varchar2(1),
ptqmspar    varchar2(23),
lf          varchar2(1),
constraint patqmha1 primary key( 
dptqmadm)
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
create public synonym patqmhaf for patqmhaf;
