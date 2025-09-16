create table pmswx1af
(
  pmwxvisn    varchar2(8) default ' ' not null,
  pmwxaloc    varchar2(50) default ' ' not null,
  pmwxcinj    varchar2(3) default ' ' not null,
  pmwxicod    varchar2(3) default ' ' not null,
  pmwxcnam    varchar2(40) default ' ' not null,
  pmwxcdte    varchar2(8) default ' ' not null,
  pmwxctim    varchar2(8) default ' ' not null,
  pmwxwebc    varchar2(10) default ' ' not null,
  pmwxlupd    varchar2(8) default ' ' not null,
  pmwxlupt    varchar2(8) default ' ' not null,
  pmwxwebu    varchar2(10) default ' ' not null,
  pmwxaccf    varchar2(3) default ' ' not null,
  pmwxplin    varchar2(3) default ' ' not null,
  pmwxacti    varchar2(3) default ' ' not null,
  pmwxadte    varchar2(8) default ' ' not null,
  pmwxatme    varchar2(8) default ' ' not null,
  pmwxaclc    varchar2(3) default ' ' not null,
  pmwxainz    varchar2(1) default ' ' not null,
  pmwxmovv    varchar2(1) default ' ' not null,
  pmwxspti    varchar2(1) default ' ' not null,
  pmwxsprt    varchar2(3) default ' ' not null,
  pmwxreci    varchar2(1) default ' ' not null,
  pmwxtric    varchar2(1) default ' ' not null,
  pmwxesta    varchar2(3) default ' ' not null,
  pmwxpddt    varchar2(8) default ' ' not null,
  pmwxarg1    varchar2(20) default ' ' not null,
  pmwxarg2    varchar2(20) default ' ' not null,
  pmwxarsn    varchar2(25) default ' ' not null,
  pmwxartl    varchar2(4) default ' ' not null,
  pmwxarrp    varchar2(10) default ' ' not null,
  pmwxasst    varchar2(1) default ' ' not null,
  pmwxneed    varchar2(1) default ' ' not null,
  pmwxcont    varchar2(1) default ' ' not null,
  pmwxaltw    varchar2(1) default ' ' not null,
  pmwxtypa    varchar2(3) default ' ' not null,
  pmwxsalt    varchar2(8) default ' ' not null,
  pmwxhpda    varchar2(2) default ' ' not null,
  pmwxunfd    varchar2(3) default ' ' not null,
  pmwxunft    varchar2(3) default ' ' not null,
  pmwxfisd    varchar2(8) default ' ' not null,
  pmwxrnwd    varchar2(8) default ' ' not null,
  pmwxcsta    varchar2(1) default ' ' not null,
  pmwxtwrk    varchar2(3) default ' ' not null,
  pmwxoest    varchar2(50) default ' ' not null,
  pmwxtpro    varchar2(10) default ' ' not null,
  pmwxecod    varchar2(6) default ' ' not null,
  pmwxgrad    varchar2(1) default ' ' not null,
  pmwxahos    varchar2(1) default ' ' not null,
  pmwxvcon    varchar2(1) default ' ' not null,
  pmwxappr    varchar2(10) default ' ' not null,
  pmwxpord    varchar2(20) default ' ' not null,
  pmwxvhcp    varchar2(10) default ' ' not null,
  pmwxspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmswx1a1 primary key( 
pmwxvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmswx1a2 on pmswx1af
(
pmwxcsta,
pmwxadte,
pmwxvisn
)
  tablespace pas_indx; 
