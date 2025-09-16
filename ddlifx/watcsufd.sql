create table watcsuaf
(
wtcsdate    char(6),
wtcsunit    char(3),
wtcsprty    char(3),
wtcsatyp    char(3),
wtcsclss    char(3),
wtcswlst    decimal(6,0),
wtcsbook    decimal(6,0),
wtcscura    decimal(6,0),
wtcsadwl    decimal(6,0),
wtcsadcn    decimal(6,0),
wtcsadmt    decimal(6,0),
wtcsbked    decimal(6,0),
wtcsdadm    decimal(6,0),
wtcswlad    decimal(6,0),
wtcswlbk    decimal(6,0),
wtcsspar    char(30),
lf          char(1)
);
create unique index watcsua1 on watcsuaf
(
wtcsdate,
wtcsunit,
wtcsprty,
wtcsatyp,
wtcsclss
);
revoke all on watcsuaf from public ; 
grant select on watcsuaf to public ; 
