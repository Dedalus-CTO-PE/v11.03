create table priflsaf
(
  prflseid    varchar2(4) default ' ' not null,
  prflsedc    varchar2(35) default ' ' not null,
  prfldbfr    varchar2(8) default ' ' not null,
  prfldbto    varchar2(8) default ' ' not null,
  prflsnfr    varchar2(20) default ' ' not null,
  prflsnto    varchar2(20) default ' ' not null,
  prflvdfr    varchar2(8) default ' ' not null,
  prflvdto    varchar2(8) default ' ' not null,
  prflppfr    varchar2(6) default ' ' not null,
  prflppto    varchar2(6) default ' ' not null,
  prflsdfr    varchar2(10) default ' ' not null,
  prflsdto    varchar2(10) default ' ' not null,
  prflccfr    varchar2(3) default ' ' not null,
  prflccto    varchar2(3) default ' ' not null,
  prflllfr    varchar2(3) default ' ' not null,
  prflllto    varchar2(3) default ' ' not null,
  prfldlfr    varchar2(8) default ' ' not null,
  prfldlto    varchar2(8) default ' ' not null,
  prflfcfr    varchar2(3) default ' ' not null,
  prflfcto    varchar2(3) default ' ' not null,
  prflfdfr    varchar2(8) default ' ' not null,
  prflfdto    varchar2(8) default ' ' not null,
  prflmbal    number(9,2) default 0 not null,
  prflidfr    varchar2(8) default ' ' not null,
  prflidto    varchar2(8) default ' ' not null,
  prflltyp    varchar2(3) default ' ' not null,
  prflscan    varchar2(1) default ' ' not null,
  prflspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priflsa1 primary key( 
prflseid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
