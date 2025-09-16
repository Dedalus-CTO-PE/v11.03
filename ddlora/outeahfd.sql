create table outeahaf
(
  otehclid    varchar2(6) default ' ' not null,
  otehrptc    varchar2(3) default ' ' not null,
  otehclbp    varchar2(9) default ' ' not null,
  otehclca    varchar2(9) default ' ' not null,
  otehsdat    varchar2(8) default ' ' not null,
  otehsnam    varchar2(40) default ' ' not null,
  otehfnam    varchar2(40) default ' ' not null,
  otehmecf    varchar2(1) default ' ' not null,
  otehmnum    varchar2(10) default ' ' not null,
  otehrnum    varchar2(1) default ' ' not null,
  otehsrvp    varchar2(8) default ' ' not null,
  otehctid    varchar2(24) default ' ' not null,
  otehudte    varchar2(8) default ' ' not null,
  otehutim    varchar2(8) default ' ' not null,
  otehrkey    varchar2(24) default ' ' not null,
  otehspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outeaha1 primary key( 
otehclid,
otehrptc,
otehrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outeaha2 on outeahaf
(
otehctid,
otehclid,
otehrptc,
otehrkey
)
  tablespace pas_indx; 
