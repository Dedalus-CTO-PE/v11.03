create table patnipbf
(
  dnbsyst     varchar2(1) default ' ' not null,
  nbindc      varchar2(3) default ' ' not null,
  nbresd      varchar2(3) default ' ' not null,
  nbcomp      varchar2(3) default ' ' not null,
  nbindv      varchar2(3) default ' ' not null,
  nbdesc      varchar2(30) default ' ' not null,
  nbitem      varchar2(3) default ' ' not null,
  nbamt       number(14,2) default 0 not null,
  nbsparx     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patnipb1 primary key( 
dnbsyst,
nbindc,
nbresd,
nbcomp,
nbindv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
