create table sinnpoaf
(
sinpcst     char(5),
sinpsup     char(5),
sinpcat     char(7),
sinpqty     decimal(6,0),
sinpsut     char(15),
sinpsub     char(5),
sinppd      char(30),
sinppn      char(30),
sinpcon     char(10),
sinpcdt     char(8),
sinpedt     char(8),
sinpect     decimal(16,4),
sinpgsta    decimal(16,4),
sinpgst     char(6),
sinpspa     char(20),
lf          char(1)
);
create unique index sinnpoa1 on sinnpoaf
(
sinpcst,
sinpsup,
sinpcat
);
revoke all on sinnpoaf from public ; 
grant select on sinnpoaf to public ; 
