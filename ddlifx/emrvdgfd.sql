create table emrvdgaf
(
  demvdadm    char(8) default ' ' not null,
  emvdcode    char(9) default ' ' not null,
  emvdprim    char(1) default ' ' not null,
  emvdsend    char(1) default ' ' not null,
  emvdspar    char(10) default ' ' not null,
  lf          char(1)
);
create unique index emrvdga1 on emrvdgaf
(
demvdadm,
emvdcode
);
revoke all on emrvdgaf from public ; 
grant select on emrvdgaf to public ; 
