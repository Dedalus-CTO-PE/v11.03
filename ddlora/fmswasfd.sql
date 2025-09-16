create table fmswasaf
(
  fmwasec     varchar2(4) default ' ' not null,
  fmwaledg    varchar2(2) default ' ' not null,
  fmwaacct    varchar2(12) default ' ' not null,
  fmwaseq     varchar2(3) default ' ' not null,
  fmwadty     number(1,0) default 0 not null,
  fmwadiv     number(14,2) default 0 not null,
  fmwadec     number(1,0) default 0 not null,
  fmwabld     number(1,0) default 0 not null,
  fmwabck     varchar2(7) default ' ' not null,
  fmwachd     varchar2(1) default ' ' not null,
  fmwatmp     varchar2(3) default ' ' not null,
  fmwaneg     varchar2(1) default ' ' not null,
  fmwalpc     varchar2(4) default ' ' not null,
  fmwaprg     varchar2(8) default ' ' not null,
  fmwarep     varchar2(2) default ' ' not null,
  fmwaurl     varchar2(30) default ' ' not null,
  fmwaspa     varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmswasa1 primary key( 
fmwasec,
fmwaseq,
fmwaledg,
fmwaacct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
