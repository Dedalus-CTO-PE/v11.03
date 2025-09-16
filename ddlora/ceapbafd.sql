create table ceapbaaf
(
  cepbpsc     varchar2(7) default ' ' not null,
  cepbyear    varchar2(4) default ' ' not null,
  cepbper     varchar2(2) default ' ' not null,
  cepbqty     number(14,2) default 0 not null,
  cepbcst1    number(14,2) default 0 not null,
  cepbcst2    number(14,2) default 0 not null,
  cepbcst3    number(14,2) default 0 not null,
  cepbcst4    number(14,2) default 0 not null,
  cepbcst5    number(14,2) default 0 not null,
  cepbspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceapbaa1 primary key( 
cepbpsc,
cepbyear,
cepbper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
