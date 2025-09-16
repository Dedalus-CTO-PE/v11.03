create table pmscmtaf
(
  pmccccod    varchar2(3) default ' ' not null,
  pmcchfun    varchar2(6) default ' ' not null,
  pmcchfty    varchar2(3) default ' ' not null,
  pmcccmcd    varchar2(9) default ' ' not null,
  dpmcccnt    varchar2(6) default ' ' not null,
  pmccpody    number(6,0) default 0 not null,
  pmccnpdy    number(6,0) default 0 not null,
  pmcchbpt    number(6,0) default 0 not null,
  pmccccdy    number(6,0) default 0 not null,
  pmccftdg    number(1,0) default 0 not null,
  pmccddrg    varchar2(4) default ' ' not null,
  pmccftcm    number(1,0) default 0 not null,
  pmccpcmf    varchar2(9) default ' ' not null,
  pmccpcmt    varchar2(9) default ' ' not null,
  pmccftsc    number(1,0) default 0 not null,
  pmccscmf    varchar2(9) default ' ' not null,
  pmccscmt    varchar2(9) default ' ' not null,
  pmccfttc    number(1,0) default 0 not null,
  pmcctcmf    varchar2(9) default ' ' not null,
  pmcctcmt    varchar2(9) default ' ' not null,
  pmccftds    number(1,0) default 0 not null,
  pmccdsta    varchar2(3) default ' ' not null,
  pmccdst2    varchar2(3) default ' ' not null,
  pmccdst3    varchar2(3) default ' ' not null,
  pmccdst4    varchar2(3) default ' ' not null,
  pmccdst5    varchar2(3) default ' ' not null,
  pmccftdd    number(1,0) default 0 not null,
  pmccddes    varchar2(3) default ' ' not null,
  pmccdde2    varchar2(3) default ' ' not null,
  pmccdde3    varchar2(3) default ' ' not null,
  pmccdde4    varchar2(3) default ' ' not null,
  pmccdde5    varchar2(3) default ' ' not null,
  pmccftas    number(1,0) default 0 not null,
  pmccasrc    varchar2(3) default ' ' not null,
  pmccasr2    varchar2(3) default ' ' not null,
  pmccasr3    varchar2(3) default ' ' not null,
  pmccasr4    varchar2(3) default ' ' not null,
  pmccasr5    varchar2(3) default ' ' not null,
  pmccft1c    number(1,0) default 0 not null,
  pmccpicd    varchar2(9) default ' ' not null,
  pmccpic2    varchar2(9) default ' ' not null,
  pmccpic3    varchar2(9) default ' ' not null,
  pmccpic4    varchar2(9) default ' ' not null,
  pmccpic5    varchar2(9) default ' ' not null,
  pmccftat    number(1,0) default 0 not null,
  pmccatyp    varchar2(3) default ' ' not null,
  pmccaty2    varchar2(3) default ' ' not null,
  pmccaty3    varchar2(3) default ' ' not null,
  pmccaty4    varchar2(3) default ' ' not null,
  pmccaty5    varchar2(3) default ' ' not null,
  pmccftau    number(1,0) default 0 not null,
  pmccaudf    varchar2(3) default ' ' not null,
  pmccaud2    varchar2(3) default ' ' not null,
  pmccaud3    varchar2(3) default ' ' not null,
  pmccaud4    varchar2(3) default ' ' not null,
  pmccaud5    varchar2(3) default ' ' not null,
  pmccftdu    number(1,0) default 0 not null,
  pmccdudf    varchar2(3) default ' ' not null,
  pmccdud2    varchar2(3) default ' ' not null,
  pmccdud3    varchar2(3) default ' ' not null,
  pmccdud4    varchar2(3) default ' ' not null,
  pmccdud5    varchar2(3) default ' ' not null,
  pmcctype    varchar2(1) default ' ' not null,
  pmcccont    varchar2(6) default ' ' not null,
  pmccmind    number(6,0) default 0 not null,
  pmccicp1    varchar2(9) default ' ' not null,
  pmccicp2    varchar2(9) default ' ' not null,
  pmccicp3    varchar2(9) default ' ' not null,
  pmccicp4    varchar2(9) default ' ' not null,
  pmccicp5    varchar2(9) default ' ' not null,
  pmccicpf    number(1,0) default 0 not null,
  pmccfts4    number(1,0) default 0 not null,
  pmccpc4f    varchar2(9) default ' ' not null,
  pmccpc4t    varchar2(9) default ' ' not null,
  pmccft5c    number(1,0) default 0 not null,
  pmccsc5f    varchar2(9) default ' ' not null,
  pmccsc5t    varchar2(9) default ' ' not null,
  pmccft6c    number(1,0) default 0 not null,
  pmcctc6f    varchar2(9) default ' ' not null,
  pmcctc6t    varchar2(9) default ' ' not null,
  pmccspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmscmta1 primary key( 
pmccccod,
pmcccont,
pmcchfun,
pmcchfty,
pmcctype,
pmcccmcd,
dpmcccnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmscmta2 on pmscmtaf
(
pmcccont,
pmccccod,
pmcchfun,
pmcchfty,
pmcctype,
pmcccmcd,
dpmcccnt
)
  tablespace pas_indx; 
create unique index pmscmta3 on pmscmtaf
(
pmccccod,
pmcchfun,
pmcchfty,
pmcctype,
dpmcccnt,
pmcccont,
pmcccmcd
)
  tablespace pas_indx; 
create unique index pmscmta4 on pmscmtaf
(
pmcccmcd,
pmccccod,
pmcchfun,
pmcchfty,
pmcctype,
dpmcccnt,
pmcccont
)
  tablespace pas_indx; 
create unique index pmscmta5 on pmscmtaf
(
pmcccont,
pmccccod,
pmcchfun,
pmcchfty,
pmcctype,
dpmcccnt,
pmcccmcd
)
  tablespace pas_indx; 
