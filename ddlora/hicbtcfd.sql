create table hicbtcaf
(
  hcbtbtch    varchar2(5) default ' ' not null,
  hcbtpmci    varchar2(8) default ' ' not null,
  hcbtpyee    varchar2(10) default ' ' not null,
  hcbtpsrv    varchar2(10) default ' ' not null,
  hcbtmpra    varchar2(6) default ' ' not null,
  hcbtdate    varchar2(8) default ' ' not null,
  hcbtsite    varchar2(6) default ' ' not null,
  hcbtctyp    varchar2(6) default ' ' not null,
  hcbtclid    varchar2(6) default ' ' not null,
  hcbtcamt    number(14,2) default 0 not null,
  hcbtamtr    number(14,2) default 0 not null,
  hcbtreja    number(14,2) default 0 not null,
  hcbtwoff    number(14,2) default 0 not null,
  hcbttrin    number(14,2) default 0 not null,
  hcbtsize    number(3,0) default 0 not null,
  hcbtstat    varchar2(2) default ' ' not null,
  hcbtadjm    number(14,2) default 0 not null,
  hcbtcmnt    varchar2(3) default ' ' not null,
  hcbthcop    varchar2(8) default ' ' not null,
  hcbtfndr    varchar2(8) default ' ' not null,
  hcbtdepd    varchar2(8) default ' ' not null,
  hcbtcdat    varchar2(8) default ' ' not null,
  hcbtctim    varchar2(8) default ' ' not null,
  hcbtcuid    varchar2(10) default ' ' not null,
  hcbtudat    varchar2(8) default ' ' not null,
  hcbtutim    varchar2(8) default ' ' not null,
  hcbtuuid    varchar2(10) default ' ' not null,
  hcbtefnm    varchar2(40) default ' ' not null,
  hcbtsent    varchar2(1) default ' ' not null,
  hcbttdat    varchar2(8) default ' ' not null,
  hcbtspar    varchar2(43) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicbtca1 primary key( 
hcbtbtch,
hcbtpsrv,
hcbtpmci,
hcbtpyee)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicbtca2 on hicbtcaf
(
hcbtpsrv,
hcbtstat,
hcbtdate,
hcbtpmci,
hcbtpyee,
hcbtbtch
)
  tablespace pas_indx; 
create unique index hicbtca3 on hicbtcaf
(
hcbtsite,
hcbtclid,
hcbtstat,
hcbtdate,
hcbtpsrv,
hcbtpmci,
hcbtpyee,
hcbtbtch
)
  tablespace pas_indx; 
create unique index hicbtca4 on hicbtcaf
(
hcbtdate,
hcbtstat,
hcbtpsrv,
hcbtpmci,
hcbtpyee,
hcbtbtch
)
  tablespace pas_indx; 
create unique index hicbtca5 on hicbtcaf
(
hcbtstat,
hcbtpsrv,
hcbtpmci,
hcbtpyee,
hcbtbtch
)
  tablespace pas_indx; 
create unique index hicbtca6 on hicbtcaf
(
hcbtmpra,
hcbtstat,
hcbtdate,
hcbtpmci,
hcbtpyee,
hcbtbtch
)
  tablespace pas_indx; 
