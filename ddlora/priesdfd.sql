create table priesdaf
(
  prsdfbid    varchar2(3) default ' ' not null,
  prsdarid    varchar2(20) default ' ' not null,
  prsdclid    varchar2(6) default ' ' not null,
  prsdrptc    varchar2(3) default ' ' not null,
  prsditmn    varchar2(5) default ' ' not null,
  prsdsrvc    varchar2(3) default ' ' not null,
  prsdsfec    varchar2(4) default ' ' not null,
  prsdsexc    varchar2(3) default ' ' not null,
  prsdsfet    varchar2(80) default ' ' not null,
  prsdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priesda1 primary key( 
prsdfbid,
prsdarid,
prsdclid,
prsdrptc,
prsditmn,
prsdsrvc,
prsdsfec,
prsdsexc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
