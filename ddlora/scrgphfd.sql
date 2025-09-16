create table scrgphaf
(
  scgpper     varchar2(3) default ' ' not null,
  scgpitm     varchar2(3) default ' ' not null,
  scgpval     varchar2(21) default ' ' not null,
  scgpdes     varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrgpha1 primary key( 
scgpper,
scgpitm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index scrgpha2 on scrgphaf
(
scgpper,
scgpval,
scgpitm
)
  tablespace pas_indx; 
