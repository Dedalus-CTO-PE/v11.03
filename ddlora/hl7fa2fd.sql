create table hl7fa2af
(
  hla2rsid    varchar2(64) default ' ' not null,
  hla2vrid    varchar2(10) default ' ' not null,
  hla2cnt1    varchar2(4) default ' ' not null,
  hla2ctg1    varchar2(50) default ' ' not null,
  hla2ctg2    varchar2(50) default ' ' not null,
  hla2ctg3    varchar2(50) default ' ' not null,
  hla2ctg4    varchar2(50) default ' ' not null,
  hla2crty    varchar2(30) default ' ' not null,
  hla2cdtx    varchar2(200) default ' ' not null,
  hla2cdur    varchar2(255) default ' ' not null,
  hla2cdvr    varchar2(200) default ' ' not null,
  hla2cdcd    varchar2(50) default ' ' not null,
  hla2cdds    varchar2(200) default ' ' not null,
  hla2cdus    varchar2(10) default ' ' not null,
  hla2osdt    varchar2(40) default ' ' not null,
  hla2osag    varchar2(40) default ' ' not null,
  hla2osps    varchar2(40) default ' ' not null,
  hla2ospe    varchar2(40) default ' ' not null,
  hla2orlv    varchar2(30) default ' ' not null,
  hla2orhv    varchar2(30) default ' ' not null,
  hla2orlc    varchar2(3) default ' ' not null,
  hla2orhc    varchar2(3) default ' ' not null,
  hla2ostr    varchar2(40) default ' ' not null,
  hla2rcdt    varchar2(40) default ' ' not null,
  hla2lodt    varchar2(40) default ' ' not null,
  hla2spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fa2a1 primary key( 
hla2rsid,
hla2vrid,
hla2cnt1)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
