create table prieahaf
(
  prahfbid    varchar2(3) default ' ' not null,
  praharid    varchar2(20) default ' ' not null,
  prahclid    varchar2(6) default ' ' not null,
  prahrptc    varchar2(3) default ' ' not null,
  prahcpfn    varchar2(40) default ' ' not null,
  prahcpmn    varchar2(10) default ' ' not null,
  prahcprn    varchar2(1) default ' ' not null,
  prahfscd    varchar2(4) default ' ' not null,
  prahcfac    varchar2(1) default ' ' not null,
  prahmcfc    varchar2(1) default ' ' not null,
  prahmscd    varchar2(4) default ' ' not null,
  prahpsnm    varchar2(40) default ' ' not null,
  prahpfnm    varchar2(40) default ' ' not null,
  prahpmcn    varchar2(10) default ' ' not null,
  prahprfn    varchar2(1) default ' ' not null,
  prahstat    varchar2(2) default ' ' not null,
  prahftid    varchar2(24) default ' ' not null,
  prahudte    varchar2(8) default ' ' not null,
  prahutim    varchar2(8) default ' ' not null,
  prahspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prieaha1 primary key( 
prahfbid,
praharid,
prahclid,
prahrptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index prieaha2 on prieahaf
(
prahftid,
prahfbid,
praharid,
prahclid,
prahrptc
)
  tablespace pas_indx; 
