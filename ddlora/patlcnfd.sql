create table patlcnaf
(
  ptlnlocn    varchar2(8) default ' ' not null,
  ptlndesc    varchar2(40) default ' ' not null,
  ptlnactv    varchar2(1) default ' ' not null,
  ptlnhosp    varchar2(3) default ' ' not null,
  ptlnspar    varchar2(16) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlcna1 primary key( 
ptlnlocn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
