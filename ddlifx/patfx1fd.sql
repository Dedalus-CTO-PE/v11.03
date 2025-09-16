create table patfx1af
(
  ptfxhfnd    char(6) default ' ' not null,
  ptfxextr    decimal(2,0) default 0 not null,
  ptfxtflg    char(1) default ' ' not null,
  ptfxaddr    char(60) default ' ' not null,
  ptfxsubj    char(30) default ' ' not null,
  ptfxadd1    char(35) default ' ' not null,
  ptfxadd2    char(35) default ' ' not null,
  ptfxadd3    char(35) default ' ' not null,
  ptfxadd4    char(35) default ' ' not null,
  ptfxpost    char(8) default ' ' not null,
  ptfxzinv    char(1) default ' ' not null,
  ptfxscem    char(80) default ' ' not null,
  ptfxscpn    char(40) default ' ' not null,
  ptfxscpp    char(20) default ' ' not null,
  ptfxeclp    char(3) default ' ' not null,
  ptfxcefr    char(1) default ' ' not null,
  ptfxrhcd    char(3) default ' ' not null,
  ptfxrhft    char(80) default ' ' not null,
  ptfxhdat    char(8) default ' ' not null,
  ptfxmfee    char(1) default ' ' not null,
  ptfxsmor    char(1) default ' ' not null,
  ptfxgsta    char(1) default ' ' not null,
  ptfxgstc    char(6) default ' ' not null,
  ptfxohdt    char(8) default ' ' not null,
  ptfxohtm    char(8) default ' ' not null,
  ptfxohui    char(10) default ' ' not null,
  ptfxspar    char(57) default ' ' not null,
  lf          char(1)
);
create unique index patfx1a1 on patfx1af
(
ptfxhfnd
);
revoke all on patfx1af from public ; 
grant select on patfx1af to public ; 
