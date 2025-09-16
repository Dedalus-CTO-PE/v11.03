create table fmsgyyyy
(
  fmbsbat     varchar2(5) default ' ' not null,
  fmbsuniq    varchar2(5) default ' ' not null,
  fmbsledg    varchar2(2) default ' ' not null,
  fmbsbasc    varchar2(3) default ' ' not null,
  fmbspdat    varchar2(8) default ' ' not null,
  fmbsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbasa1 primary key( 
fmbsbat,
fmbsuniq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsbasa2 on fmsgyyyy
(
fmbsledg,
fmbsbasc,
fmbspdat,
fmbsbat,
fmbsuniq
)
  tablespace pas_indx; 
