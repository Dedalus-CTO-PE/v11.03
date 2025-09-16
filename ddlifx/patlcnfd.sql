create table patlcnaf
(
ptlnlocn    char(8),
ptlndesc    char(40),
ptlnactv    char(1),
ptlnhosp    char(3),
ptlnspar    char(16),
lf          char(1)
);
create unique index patlcna1 on patlcnaf
(
ptlnlocn
);
revoke all on patlcnaf from public ; 
grant select on patlcnaf to public ; 
