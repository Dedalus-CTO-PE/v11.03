create table oprdlvaf
(
opdvdoct    char(6),
opdvfdte    char(8),
opdvtdte    char(8),
opdvreas    char(3),
opdvlast    char(8),
opdvspar    char(30),
lf          char(1)
);
create unique index oprdlva1 on oprdlvaf
(
opdvdoct,
opdvfdte
);
revoke all on oprdlvaf from public ; 
grant select on oprdlvaf to public ; 
