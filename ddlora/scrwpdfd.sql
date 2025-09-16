create table scrwpdaf
(
  scwppid     varchar2(8) default ' ' not null,
  scwpsid     varchar2(2) default ' ' not null,
  scwpitm     varchar2(5) default ' ' not null,
  scwpfld     varchar2(8) default ' ' not null,
  scwppak     varchar2(36) default ' ' not null,
  scwpmln     number(2,0) default 0 not null,
  scwpcon     number(1,0) default 0 not null,
  scwprds     number(1,0) default 0 not null,
  scwprdo     number(1,0) default 0 not null,
  scwpshm     number(1,0) default 0 not null,
  scwpdfr     number(2,0) default 0 not null,
  scwpdfc     number(3,0) default 0 not null,
  scwpnor     number(2,0) default 0 not null,
  scwplen     number(3,0) default 0 not null,
  scwpbty     number(1,0) default 0 not null,
  scwpbsq     number(1,0) default 0 not null,
  scwpspa     varchar2(8) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrwpda1 primary key( 
scwppid,
scwpsid,
scwpitm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
