create table ccsceeaf
(
  cceelv1     varchar2(10) default ' ' not null,
  cceelv2     varchar2(10) default ' ' not null,
  cceelv3     varchar2(10) default ' ' not null,
  cceenep     number(6,0) default 0 not null,
  cceeftc     number(16,4) default 0 not null,
  cceefmn     number(14,2) default 0 not null,
  cceefmx     number(14,2) default 0 not null,
  cceefsv     number(16,4) default 0 not null,
  cceettc     number(16,4) default 0 not null,
  cceetmn     number(14,2) default 0 not null,
  cceetmx     number(14,2) default 0 not null,
  cceetsv     number(16,4) default 0 not null,
  cceelto     number(14,2) default 0 not null,
  cceelmn     number(14,2) default 0 not null,
  cceelmx     number(14,2) default 0 not null,
  cceelsv     number(16,4) default 0 not null,
  cceespa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccsceea1 primary key( 
cceelv1,
cceelv2,
cceelv3)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
