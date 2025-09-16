create table oldtfeaf
(
  tfclm       varchar2(3) default ' ' not null,
  tfhfund     varchar2(6) default ' ' not null,
  tfhftab     varchar2(8) default ' ' not null,
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
  tfspare     varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint jhstf2a1 primary key( 
tfclm,
tfhfund,
tfhftab,
tfdayc,
tfendmbs)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
