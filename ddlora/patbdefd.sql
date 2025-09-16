create table patbdeaf
(
  ptbehosp    varchar2(3) default ' ' not null,
  ptbesdte    varchar2(8) default ' ' not null,
  ptbeedte    varchar2(8) default ' ' not null,
  ptbevsid    varchar2(30) default ' ' not null,
  ptbeclmc    varchar2(3) default ' ' not null,
  ptbehfnd    varchar2(6) default ' ' not null,
  ptbehftb    varchar2(8) default ' ' not null,
  ptbeilos    varchar2(3) default ' ' not null,
  ptbetlos    number(3,0) default 0 not null,
  ptbecsmx    varchar2(9) default ' ' not null,
  ptbecpay    varchar2(1) default ' ' not null,
  ptbedrgc    varchar2(4) default ' ' not null,
  ptbedrgv    varchar2(3) default ' ' not null,
  ptbeadmn    varchar2(3) default ' ' not null,
  ptbecare    varchar2(3) default ' ' not null,
  ptbeprgm    varchar2(8) default ' ' not null,
  ptbepill    varchar2(3) default ' ' not null,
  ptbembsi    varchar2(9) default ' ' not null,
  ptbealer    varchar2(3) default ' ' not null,
  ptbecdat    varchar2(8) default ' ' not null,
  ptbectim    varchar2(8) default ' ' not null,
  ptbecuid    varchar2(10) default ' ' not null,
  ptbeudat    varchar2(8) default ' ' not null,
  ptbeutim    varchar2(8) default ' ' not null,
  ptbeuuid    varchar2(10) default ' ' not null,
  ptbespar    varchar2(79) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patbdea1 primary key( 
ptbehosp,
ptbeclmc,
ptbehfnd,
ptbehftb,
ptbevsid,
ptbesdte)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
