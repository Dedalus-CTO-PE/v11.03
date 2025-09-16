create table oldbfeaf
(
  bfclm       varchar2(3) default ' ' not null,
  bfhfund     varchar2(6) default ' ' not null,
  bfhftab     varchar2(8) default ' ' not null,
  bfatype     varchar2(3) default ' ' not null,
  bfbtype     varchar2(3) default ' ' not null,
  dbfenddy    varchar2(3) default ' ' not null,
  bfpat       number(14,2) default 0 not null,
  bfhf        number(14,2) default 0 not null,
  bfninv      number(1,0) default 0 not null,
  bfdesc      varchar2(30) default ' ' not null,
  bfhdp       varchar2(4) default ' ' not null,
  bfspare     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint jhsbf2a1 primary key( 
bfclm,
bfhfund,
bfhftab,
bfatype,
bfbtype,
dbfenddy)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index jhsbf2a2 on oldbfeaf
(
bfclm,
bfhfund,
bfatype,
bfbtype,
bfhftab,
dbfenddy
)
  tablespace pas_indx; 
create unique index jhsbf2a3 on oldbfeaf
(
bfhfund,
bfhftab,
bfclm,
bfatype,
bfbtype,
dbfenddy
)
  tablespace pas_indx; 
