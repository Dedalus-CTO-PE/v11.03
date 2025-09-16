create table pmsbthaf
(
  pmbtuniq    varchar2(10) default ' ' not null,
  pmbtbunq    varchar2(10) default ' ' not null,
  pmbtaudc    varchar2(3) default ' ' not null,
  pmbtadmn    varchar2(8) default ' ' not null,
  pmbtadmm    varchar2(8) default ' ' not null,
  pmbtlurn    varchar2(8) default ' ' not null,
  pmbtnbfr    varchar2(10) default ' ' not null,
  pmbtplur    varchar2(2) default ' ' not null,
  pmbtadop    varchar2(3) default ' ' not null,
  pmbtbbar    varchar2(3) default ' ' not null,
  pmbtbdat    varchar2(8) default ' ' not null,
  pmbtbtim    varchar2(9) default ' ' not null,
  pmbtestg    varchar2(2) default ' ' not null,
  pmbtgend    varchar2(1) default ' ' not null,
  pmbtbsta    varchar2(3) default ' ' not null,
  pmbtmdel    varchar2(3) default ' ' not null,
  pmbtapg1    varchar2(1) default ' ' not null,
  pmbtapg2    varchar2(1) default ' ' not null,
  pmbttres    varchar2(3) default ' ' not null,
  pmbtdrug    varchar2(80) default ' ' not null,
  pmbtbwgh    varchar2(5) default ' ' not null,
  pmbtlngt    varchar2(3) default ' ' not null,
  pmbthead    varchar2(3) default ' ' not null,
  pmbtmoul    varchar2(3) default ' ' not null,
  pmbtcapu    varchar2(3) default ' ' not null,
  pmbtcorb    varchar2(3) default ' ' not null,
  pmbtmeco    varchar2(3) default ' ' not null,
  pmbturin    varchar2(3) default ' ' not null,
  pmbtpaed    varchar2(10) default ' ' not null,
  pmbtnicu    varchar2(3) default ' ' not null,
  pmbtvitk    varchar2(1) default ' ' not null,
  pmbthbdt    varchar2(8) default ' ' not null,
  pmbthbtm    varchar2(8) default ' ' not null,
  pmbtbfat    varchar2(3) default ' ' not null,
  pmbtifdd    varchar2(3) default ' ' not null,
  pmbtbeby    varchar2(10) default ' ' not null,
  pmbtlbat    varchar2(10) default ' ' not null,
  pmbtlbch    varchar2(10) default ' ' not null,
  pmbtgdat    varchar2(8) default ' ' not null,
  pmbtgtim    varchar2(8) default ' ' not null,
  pmbtdwgh    varchar2(5) default ' ' not null,
  pmbtbpre    varchar2(3) default ' ' not null,
  pmbtcane    varchar2(3) default ' ' not null,
  pmbtcabo    varchar2(3) default ' ' not null,
  pmbtwebc    varchar2(10) default ' ' not null,
  pmbtdatc    varchar2(8) default ' ' not null,
  pmbttimc    varchar2(8) default ' ' not null,
  pmbtwebu    varchar2(10) default ' ' not null,
  pmbtdatu    varchar2(8) default ' ' not null,
  pmbttimu    varchar2(8) default ' ' not null,
  pmbtrecs    varchar2(1) default ' ' not null,
  pmbtwebd    varchar2(10) default ' ' not null,
  pmbtdatd    varchar2(8) default ' ' not null,
  pmbttimd    varchar2(8) default ' ' not null,
  pmbtreas    varchar2(3) default ' ' not null,
  pmbtspar    varchar2(57) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsbtha1 primary key( 
pmbtuniq,
pmbtbunq,
pmbtaudc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsbtha2 on pmsbthaf
(
pmbtadmn,
pmbtuniq,
pmbtbunq,
pmbtaudc
)
  tablespace pas_indx; 
create unique index pmsbtha3 on pmsbthaf
(
pmbtadmm,
pmbtuniq,
pmbtbunq,
pmbtaudc
)
  tablespace pas_indx; 
create unique index pmsbtha4 on pmsbthaf
(
pmbtlurn,
pmbtuniq,
pmbtbunq,
pmbtaudc
)
  tablespace pas_indx; 
