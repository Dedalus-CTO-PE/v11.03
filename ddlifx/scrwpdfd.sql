create table scrwpdaf
(
  scwppid     char(8) default ' ' not null,
  scwpsid     char(2) default ' ' not null,
  scwpitm     char(5) default ' ' not null,
  scwpfld     char(8) default ' ' not null,
  scwppak     char(36) default ' ' not null,
  scwpmln     decimal(2,0) default 0 not null,
  scwpcon     decimal(1,0) default 0 not null,
  scwprds     decimal(1,0) default 0 not null,
  scwprdo     decimal(1,0) default 0 not null,
  scwpshm     decimal(1,0) default 0 not null,
  scwpdfr     decimal(2,0) default 0 not null,
  scwpdfc     decimal(3,0) default 0 not null,
  scwpnor     decimal(2,0) default 0 not null,
  scwplen     decimal(3,0) default 0 not null,
  scwpbty     decimal(1,0) default 0 not null,
  scwpbsq     decimal(1,0) default 0 not null,
  scwpspa     char(8) default ' ' not null,
  lf          char(1)
);
create unique index scrwpda1 on scrwpdaf
(
scwppid,
scwpsid,
scwpitm
);
revoke all on scrwpdaf from public ; 
grant select on scrwpdaf to public ; 
