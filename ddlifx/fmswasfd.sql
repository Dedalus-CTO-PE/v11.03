create table fmswasaf
(
  fmwasec     char(4) default ' ' not null,
  fmwaledg    char(2) default ' ' not null,
  fmwaacct    char(12) default ' ' not null,
  fmwaseq     char(3) default ' ' not null,
  fmwadty     decimal(1,0) default 0 not null,
  fmwadiv     decimal(14,2) default 0 not null,
  fmwadec     decimal(1,0) default 0 not null,
  fmwabld     decimal(1,0) default 0 not null,
  fmwabck     char(7) default ' ' not null,
  fmwachd     char(1) default ' ' not null,
  fmwatmp     char(3) default ' ' not null,
  fmwaneg     char(1) default ' ' not null,
  fmwalpc     char(4) default ' ' not null,
  fmwaprg     char(8) default ' ' not null,
  fmwarep     char(2) default ' ' not null,
  fmwaurl     char(30) default ' ' not null,
  fmwaspa     char(1) default ' ' not null,
  lf          char(1)
);
create unique index fmswasa1 on fmswasaf
(
fmwasec,
fmwaseq,
fmwaledg,
fmwaacct
);
revoke all on fmswasaf from public ; 
grant select on fmswasaf to public ; 
