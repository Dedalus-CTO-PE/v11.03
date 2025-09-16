create table pmswx1af
(
  pmwxvisn    char(8) default ' ' not null,
  pmwxaloc    char(50) default ' ' not null,
  pmwxcinj    char(3) default ' ' not null,
  pmwxicod    char(3) default ' ' not null,
  pmwxcnam    char(40) default ' ' not null,
  pmwxcdte    char(8) default ' ' not null,
  pmwxctim    char(8) default ' ' not null,
  pmwxwebc    char(10) default ' ' not null,
  pmwxlupd    char(8) default ' ' not null,
  pmwxlupt    char(8) default ' ' not null,
  pmwxwebu    char(10) default ' ' not null,
  pmwxaccf    char(3) default ' ' not null,
  pmwxplin    char(3) default ' ' not null,
  pmwxacti    char(3) default ' ' not null,
  pmwxadte    char(8) default ' ' not null,
  pmwxatme    char(8) default ' ' not null,
  pmwxaclc    char(3) default ' ' not null,
  pmwxainz    char(1) default ' ' not null,
  pmwxmovv    char(1) default ' ' not null,
  pmwxspti    char(1) default ' ' not null,
  pmwxsprt    char(3) default ' ' not null,
  pmwxreci    char(1) default ' ' not null,
  pmwxtric    char(1) default ' ' not null,
  pmwxesta    char(3) default ' ' not null,
  pmwxpddt    char(8) default ' ' not null,
  pmwxarg1    char(20) default ' ' not null,
  pmwxarg2    char(20) default ' ' not null,
  pmwxarsn    char(25) default ' ' not null,
  pmwxartl    char(4) default ' ' not null,
  pmwxarrp    char(10) default ' ' not null,
  pmwxasst    char(1) default ' ' not null,
  pmwxneed    char(1) default ' ' not null,
  pmwxcont    char(1) default ' ' not null,
  pmwxaltw    char(1) default ' ' not null,
  pmwxtypa    char(3) default ' ' not null,
  pmwxsalt    char(8) default ' ' not null,
  pmwxhpda    char(2) default ' ' not null,
  pmwxunfd    char(3) default ' ' not null,
  pmwxunft    char(3) default ' ' not null,
  pmwxfisd    char(8) default ' ' not null,
  pmwxrnwd    char(8) default ' ' not null,
  pmwxcsta    char(1) default ' ' not null,
  pmwxtwrk    char(3) default ' ' not null,
  pmwxoest    char(50) default ' ' not null,
  pmwxtpro    char(10) default ' ' not null,
  pmwxecod    char(6) default ' ' not null,
  pmwxgrad    char(1) default ' ' not null,
  pmwxahos    char(1) default ' ' not null,
  pmwxvcon    char(1) default ' ' not null,
  pmwxappr    char(10) default ' ' not null,
  pmwxpord    char(20) default ' ' not null,
  pmwxvhcp    char(10) default ' ' not null,
  pmwxspar    char(7) default ' ' not null,
  lf          char(1)
);
create unique index pmswx1a1 on pmswx1af
(
pmwxvisn
);
create unique index pmswx1a2 on pmswx1af
(
pmwxcsta,
pmwxadte,
pmwxvisn
);
revoke all on pmswx1af from public ; 
grant select on pmswx1af to public ; 
