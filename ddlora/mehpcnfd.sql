create table mehpcnaf
(
  mhpnxdat    varchar2(8) default ' ' not null,
  mhpnxnum    varchar2(3) default ' ' not null,
  mhpnvisn    varchar2(8) default ' ' not null,
  mhpnurno    varchar2(8) default ' ' not null,
  mhpnocur    varchar2(3) default ' ' not null,
  mhpnerid    varchar2(9) default ' ' not null,
  mhpncscd    varchar2(20) default ' ' not null,
  mhpncsys    varchar2(2) default ' ' not null,
  mhpndtyp    varchar2(1) default ' ' not null,
  mhpnccod    varchar2(8) default ' ' not null,
  mhpnicid    varchar2(2) default ' ' not null,
  mhpnityp    varchar2(1) default ' ' not null,
  mhpnival    varchar2(8) default ' ' not null,
  mhpnsdat    varchar2(19) default ' ' not null,
  mhpnedat    varchar2(19) default ' ' not null,
  mhpnspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mehpcna1 primary key( 
mhpnxdat,
mhpnxnum,
mhpnvisn,
mhpnurno,
mhpnocur)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
