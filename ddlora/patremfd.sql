create table patremdf
(
dremadmn    varchar2(8),
remlstl     varchar2(3),
remldte     varchar2(8),
rempdte     varchar2(8),
remhflg     number(1,0),
remspar     varchar2(21),
lf          varchar2(1),
constraint patremd1 primary key( 
dremadmn)
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
create public synonym patremdf for patremdf;
