create table fmslmbaf
(
  fmlbrpno    varchar2(2) default ' ' not null,
  fmlbdesc    varchar2(35) default ' ' not null,
  fmlbacui    number(1,0) default 0 not null,
  fmlbbuui    number(1,0) default 0 not null,
  fmlbspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmslmba1 primary key( 
fmlbrpno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
