create table ceapaaaf
(
  cepaspc     varchar2(3) default ' ' not null,
  cepapsc     varchar2(7) default ' ' not null,
  cepayear    varchar2(4) default ' ' not null,
  cepaper     varchar2(2) default ' ' not null,
  cepaqty     number(14,2) default 0 not null,
  cepacst1    number(14,2) default 0 not null,
  cepacst2    number(14,2) default 0 not null,
  cepacst3    number(14,2) default 0 not null,
  cepacst4    number(14,2) default 0 not null,
  cepacst5    number(14,2) default 0 not null,
  cepaspa     varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceapaaa1 primary key( 
cepaspc,
cepapsc,
cepayear,
cepaper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
