create table ccigdpaf
(
  dccgdtyp    char(3) default ' ' not null,
  ccgdcod1    char(9) default ' ' not null,
  ccgdcod2    char(9) default ' ' not null,
  ccgddept    char(3) default ' ' not null,
  ccgdspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index ccigdpa1 on ccigdpaf
(
dccgdtyp,
ccgdcod1,
ccgdcod2
);
revoke all on ccigdpaf from public ; 
grant select on ccigdpaf to public ; 
