create table patfx1af
(
  ptfxhfnd    varchar2(6) default ' ' not null,
  ptfxextr    number(2,0) default 0 not null,
  ptfxtflg    varchar2(1) default ' ' not null,
  ptfxaddr    varchar2(60) default ' ' not null,
  ptfxsubj    varchar2(30) default ' ' not null,
  ptfxadd1    varchar2(35) default ' ' not null,
  ptfxadd2    varchar2(35) default ' ' not null,
  ptfxadd3    varchar2(35) default ' ' not null,
  ptfxadd4    varchar2(35) default ' ' not null,
  ptfxpost    varchar2(8) default ' ' not null,
  ptfxzinv    varchar2(1) default ' ' not null,
  ptfxscem    varchar2(80) default ' ' not null,
  ptfxscpn    varchar2(40) default ' ' not null,
  ptfxscpp    varchar2(20) default ' ' not null,
  ptfxeclp    varchar2(3) default ' ' not null,
  ptfxcefr    varchar2(1) default ' ' not null,
  ptfxrhcd    varchar2(3) default ' ' not null,
  ptfxrhft    varchar2(80) default ' ' not null,
  ptfxhdat    varchar2(8) default ' ' not null,
  ptfxmfee    varchar2(1) default ' ' not null,
  ptfxsmor    varchar2(1) default ' ' not null,
  ptfxgsta    varchar2(1) default ' ' not null,
  ptfxgstc    varchar2(6) default ' ' not null,
  ptfxohdt    varchar2(8) default ' ' not null,
  ptfxohtm    varchar2(8) default ' ' not null,
  ptfxohui    varchar2(10) default ' ' not null,
  ptfxspar    varchar2(57) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfx1a1 primary key( 
ptfxhfnd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
