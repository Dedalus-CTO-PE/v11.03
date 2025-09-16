create table patbfeef
(
  bfclm       varchar2(3) default ' ' not null,
  bfhfund     varchar2(6) default ' ' not null,
  ptbfhtyp    varchar2(3) default ' ' not null,
  bfatype     varchar2(3) default ' ' not null,
  bfbtype     varchar2(3) default ' ' not null,
  dbfenddy    varchar2(3) default ' ' not null,
  bfpat       number(14,2) default 0 not null,
  bfhf        number(14,2) default 0 not null,
  bfninv      number(1,0) default 0 not null,
  bfdesc      varchar2(30) default ' ' not null,
  ptbfcnid    varchar2(6) default ' ' not null,
  bfspare     varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbfee1 primary key( 
bfclm,
bfhfund,
ptbfhtyp,
bfatype,
bfbtype,
ptbfcnid,
dbfenddy)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patbfee2 on patbfeef
(
bfclm,
bfhfund,
bfatype,
bfbtype,
ptbfhtyp,
ptbfcnid,
dbfenddy
)
  tablespace pas_indx; 
create unique index patbfee3 on patbfeef
(
ptbfcnid,
bfclm,
bfhfund,
ptbfhtyp,
bfatype,
bfbtype,
dbfenddy
)
  tablespace pas_indx; 
