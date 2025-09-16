create table pattfeef
(
  tfclm       varchar2(3) default ' ' not null,
  tfhfund     varchar2(6) default ' ' not null,
  pttfhtyp    varchar2(3) default ' ' not null,
  tfdayc      varchar2(1) default ' ' not null,
  tfendmbs    varchar2(5) default ' ' not null,
  tfhf1       number(14,2) default 0 not null,
  tfpat1      number(14,2) default 0 not null,
  tfhf2       number(14,2) default 0 not null,
  tfpat2      number(14,2) default 0 not null,
  tfhf3       number(14,2) default 0 not null,
  tfpat3      number(14,2) default 0 not null,
  tfhf4       number(14,2) default 0 not null,
  tfpat4      number(14,2) default 0 not null,
  tfhf5       number(14,2) default 0 not null,
  tfpat5      number(14,2) default 0 not null,
  tfhf6       number(14,2) default 0 not null,
  tfpat6      number(14,2) default 0 not null,
  tfninv      number(1,0) default 0 not null,
  pttfcnid    varchar2(6) default ' ' not null,
  tfspare     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pattfee1 primary key( 
tfclm,
tfhfund,
pttfhtyp,
tfdayc,
tfendmbs,
pttfcnid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pattfee2 on pattfeef
(
pttfcnid,
tfclm,
tfhfund,
pttfhtyp,
tfdayc,
tfendmbs
)
  tablespace pas_indx; 
