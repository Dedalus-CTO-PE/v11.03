create table fmssscaf
(
  fmtstled    varchar2(2) default ' ' not null,
  fmtstacc    varchar2(12) default ' ' not null,
  fmtsaseq    varchar2(5) default ' ' not null,
  fmtssacc    varchar2(12) default ' ' not null,
  fmtsaddt    varchar2(1) default ' ' not null,
  fmtssubj    varchar2(1) default ' ' not null,
  fmtsspar    varchar2(19) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsssca1 primary key( 
fmtstled,
fmtstacc,
fmtsaseq,
fmtssacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsssca2 on fmssscaf
(
fmtstled,
fmtssacc,
fmtstacc,
fmtsaseq
)
  tablespace pas_indx; 
