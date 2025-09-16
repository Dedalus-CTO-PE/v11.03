create table pmsbthaf
(
  pmbtuniq    char(10) default ' ' not null,
  pmbtbunq    char(10) default ' ' not null,
  pmbtaudc    char(3) default ' ' not null,
  pmbtadmn    char(8) default ' ' not null,
  pmbtadmm    char(8) default ' ' not null,
  pmbtlurn    char(8) default ' ' not null,
  pmbtnbfr    char(10) default ' ' not null,
  pmbtplur    char(2) default ' ' not null,
  pmbtadop    char(3) default ' ' not null,
  pmbtbbar    char(3) default ' ' not null,
  pmbtbdat    char(8) default ' ' not null,
  pmbtbtim    char(9) default ' ' not null,
  pmbtestg    char(2) default ' ' not null,
  pmbtgend    char(1) default ' ' not null,
  pmbtbsta    char(3) default ' ' not null,
  pmbtmdel    char(3) default ' ' not null,
  pmbtapg1    char(1) default ' ' not null,
  pmbtapg2    char(1) default ' ' not null,
  pmbttres    char(3) default ' ' not null,
  pmbtdrug    char(80) default ' ' not null,
  pmbtbwgh    char(5) default ' ' not null,
  pmbtlngt    char(3) default ' ' not null,
  pmbthead    char(3) default ' ' not null,
  pmbtmoul    char(3) default ' ' not null,
  pmbtcapu    char(3) default ' ' not null,
  pmbtcorb    char(3) default ' ' not null,
  pmbtmeco    char(3) default ' ' not null,
  pmbturin    char(3) default ' ' not null,
  pmbtpaed    char(10) default ' ' not null,
  pmbtnicu    char(3) default ' ' not null,
  pmbtvitk    char(1) default ' ' not null,
  pmbthbdt    char(8) default ' ' not null,
  pmbthbtm    char(8) default ' ' not null,
  pmbtbfat    char(3) default ' ' not null,
  pmbtifdd    char(3) default ' ' not null,
  pmbtbeby    char(10) default ' ' not null,
  pmbtlbat    char(10) default ' ' not null,
  pmbtlbch    char(10) default ' ' not null,
  pmbtgdat    char(8) default ' ' not null,
  pmbtgtim    char(8) default ' ' not null,
  pmbtdwgh    char(5) default ' ' not null,
  pmbtbpre    char(3) default ' ' not null,
  pmbtcane    char(3) default ' ' not null,
  pmbtcabo    char(3) default ' ' not null,
  pmbtwebc    char(10) default ' ' not null,
  pmbtdatc    char(8) default ' ' not null,
  pmbttimc    char(8) default ' ' not null,
  pmbtwebu    char(10) default ' ' not null,
  pmbtdatu    char(8) default ' ' not null,
  pmbttimu    char(8) default ' ' not null,
  pmbtrecs    char(1) default ' ' not null,
  pmbtwebd    char(10) default ' ' not null,
  pmbtdatd    char(8) default ' ' not null,
  pmbttimd    char(8) default ' ' not null,
  pmbtreas    char(3) default ' ' not null,
  pmbtspar    char(57) default ' ' not null,
  lf          char(1)
);
create unique index pmsbtha1 on pmsbthaf
(
pmbtuniq,
pmbtbunq,
pmbtaudc
);
create unique index pmsbtha2 on pmsbthaf
(
pmbtadmn,
pmbtuniq,
pmbtbunq,
pmbtaudc
);
create unique index pmsbtha3 on pmsbthaf
(
pmbtadmm,
pmbtuniq,
pmbtbunq,
pmbtaudc
);
create unique index pmsbtha4 on pmsbthaf
(
pmbtlurn,
pmbtuniq,
pmbtbunq,
pmbtaudc
);
revoke all on pmsbthaf from public ; 
grant select on pmsbthaf to public ; 
